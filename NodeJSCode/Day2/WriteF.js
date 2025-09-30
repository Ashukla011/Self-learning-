const fs = require("fs")

// fs.writeFile("./lecture.txt","This is my first project\n",(err)=>{
//     if(err){
//           console.log("can not write into the file")
//           console.log(err)
//     }else{
//         console.log('Data has been written')
//     }
// });



// try{
//     fs.writeFileSync("./lecture.txt","This is my file");
//     console.log("file is written")
// }catch(err){
//     console.log(err);
// }


let a = fs.appendFile("./lecture.txt","This is my third project \n",(err)=>{
    if(err){
        console.log(err)
    }else{
        console.log("appended")
    }
})

try{
   fs.appendFileSync("./lecture.txt","this is my new project \n")
}catch(err){
   console.log(err)
}