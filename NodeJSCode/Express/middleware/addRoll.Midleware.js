const addRoll = (req,res,next)=>{
 
   
        if(req.method = "POST"){
         let roll = Math.random();
        req.body.roll_no=roll ;
        req.body.university = "CU"
        next()
        }
    
}

module.exports ={
    addRoll
}