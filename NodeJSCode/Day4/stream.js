const fs = require("fs")
const {Transform} = require('stream')


//Stream: A way to process data piece y piece , not all at once

// writable stean
const writable = fs.createWriteStream("bigfile.txt");
writable.write("New log entry\n");

// Transform Stream
const upperCase = new Transform({
    transform(chunk,encoding,callback){
        callback(null,chunk.toString().toUpperCase());
    }
})
process.stdin.pipe(upperCase).pipe(process.stdout);

// pipeline() and finished()
// pipeline(): Connect stream safely(handles errors)
// finished(): know when a stream is done

const {pipeline} = require("stream")


pipeline(
    fs.createReadStream('bigfile.txt'),
    fs.createWriteStream('output.txt'),
    (err)=>{
        if(err) console.error('Pipeline failed',err);
        else console.log("Pipline succeded")
    }
)

//Readable Stream
const readable = fs.createReadStream("bigfile.txt");
readable.on("data",(chunk)=>{
    console.log("Recieved chunk:",chunk.toString());

})


