const express = require("express")
const fs = require("fs")
const app = express();
// const{timelogger} = require("./middleware/timelogger.midle");
// const{watchman} = require("./middleware/watchman.midle")
// const {logger} = require("./middleware/logger.midle")
const {addRoll} = require("./middleware/addRoll.Midleware")
const port = 3000;

// app.use(watchman)
// app.use(timelogger)
app.use(express.json())
// app.use(logger);
app.use(addRoll)

app.get("/",(req,res)=>{
    console.log("home page")
    res.send("welcome home")
})
app.get("/contacts",(req,res)=>{
    console.log("contacts page")
    res.send("welcome contacts")
})
app.get("/about",(req,res)=>{
    console.log("about page")
    res.send("welcome about")
})
app.post("/newStudents",(req,res)=>{
    console.log(req.body);
    res.send("new students has been enter")
})
app.get("/data",(req,res)=>{
   let data = fs.readFileSync("./dummy.txt","utf-8")
   res.send(data)
})


app.listen(port,()=>{
    console.log("Port is running on 3000")
})