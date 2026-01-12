const fs = require("fs")

const logger = (req,res,next)=>{
fs.appendFileSync("../log.txt",`Route${req.url} Method: ${req.method}\n`,'utf-8')
next();
}

module.exports={
    logger
}