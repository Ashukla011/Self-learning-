interface User {
    name:String,
    id:Number
}

class UserAccount {
    name : String;
    id : Number;
    Constructor(name:String, id: String){
      this.name = name;
      this.id = id
    }
}

const user: User = new UserAccount("avi",1)