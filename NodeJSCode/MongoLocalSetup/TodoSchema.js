const mongoose = require("mongoose")

const TodoList = mongoose.Schema({
  
    Title:{
        type:String,
        required:true
    },
    Desc:{
        type:String,
    
    }
})

module.exports = mongoose.model("Todo",TodoList)