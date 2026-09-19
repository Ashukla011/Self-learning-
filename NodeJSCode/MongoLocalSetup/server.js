const express = require("express")
const mongoose = require("mongoose")
const app = express()
const TodoList = require("./TodoSchema.js")
app.use(express.json())


// connect to db

async function connectDB(){
    try{
        const connecting = await mongoose.connect("mongodb+srv://avnish011:ashukla011@assignment.9dvs41a.mongodb.net/")
        console.log("db connected")
    }catch(err){
        console.err( "Failed to connect", err.message)
    }
}

app.get("/",async (req,res)=>{
   try{
     const todo = await TodoList.find()
      res.status(200).json({message:"find all Todo", todo})
   }catch(error){
    res.status(400).json({message:"Not get the todo list" , error})
   }
})

app.post("/CreateTodo",async(req,res)=>{
    const {id,Title,Desc} = req.body
    try{
        const Todo = new TodoList({id,Title,Desc});
        Todo.save()
        res.status(200).json({message:"Todo Create",Todo})
    }catch(error){
      res.status(400).json({message:"todo not create", error})
    }
})

// update todo list

app.put("/UpdateTodo/:id", async(req,res)=>{
    const {id} = req.params;
    const {Title,Desc} = req.body
    console.log(id)
    try{
        const UpdateTodo = await  TodoList.findByIdAndUpdate(
        id,
        {Title,Desc},
        {returnDocument:"after"}
    );
    if(!UpdateTodo){
        return res.status(400).json({message:"Todo Not Found"})
    }
    res.status(200).json({message:"Todo Updated",UpdateTodo})
    }catch(error){
       res.status(400).json({message:"todo not update", error: error.message})
    }

});

// delete todo

app.delete('/DeleteTodo/:id',async(req,res)=>{
    const {id} = req.params
    try{
        const todo = await TodoList.findByIdAndDelete(id)
        if(!todo){
            res.status(400).json({message:"todo not found"})

        }

        res.status(200).json({message:"todo delete",todo})

    }catch(error){
res.status(400).json({message:"error", error})
    }
})


// search todo item

app.get("/SearchItem", async (req,res)=>{
    const {Keyword="", page =1, pageSize = 5} = req.query;
    const skip = (page-1)*pageSize;
    try{
        const result = await TodoList.aggregate([
            {$match:{Title:{$regex:Keyword, $options:"i"}}},
            {$sort:{Title:1}},
            {$skip:Number(skip)},
            {$limit:Number(pageSize)}
        ]);
        res.status(200).json({message:"search result", result})
    }catch(error){
         res.status(400).json({message:"result not found", error:error.message})
    }
})
const PORT = 3000
app.listen(PORT, ()=>{
    connectDB()
    console.log("server is running on port 3000")
})