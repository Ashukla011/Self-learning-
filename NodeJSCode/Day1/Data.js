
// ES-6 2015-16
const sum=(a,b)=>{
    console.log(a+b);
}
const x = (a,b)=>{
    console.log(a*b)
}

const y = (a,b)=>{
    console.log(a/b)
}
// how to export this
// module.exports=sum;
// module.exports=x ;
// module.exports=y;
module.exports=[sum,x,y]