const http = require("http")
const fs = require("fs")
const server = http.createServer((req,res)=>{
    if(req.url == "/"){
        res.end("This is home page")
    }else if(req.url ==="/data"){
       fs.readFile("./data.json",(err,data)=>{
        if(err){
        res.write(err)
        res.end()
       }else{
          res.setHeader("content-type","text/html")
        res.end(`<p>${data}</p>`)
       
       }
       })
    }else{
        console.log("Invailed!")
    }
}) 

const port = 4500;
server.listen(port,()=>{
    console.log(`server is running in the ${port}`)
})