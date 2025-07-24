let timelogger = (req,res,next)=>{
let starttime = new Date().getTime()
next()
let endTime = new Date().getTime();
console.log(endTime-starttime)
}

module.exports={
    timelogger
}