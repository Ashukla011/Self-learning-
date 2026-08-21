const http = require("http")

const createhttpServer = http.createServer((req,res)=>{
    res.writeHead(200, {'Content-type':"text/plain"});
    res.end("Hello world\n")
})

const PORT  = 3000

createhttpServer.listen(PORT,()=>{
    console.log("Server is running on PORT 3000")
})