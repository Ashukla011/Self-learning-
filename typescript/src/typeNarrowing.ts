//""" type naarrowing 
// Type narrowing is the process of moving a variable from a broad, less precise type—like
//  a union or unknown—to a highly specific type within a conditional block of code. It 
// bridges the gap between static compilation and dynamic runtime data, ensuring the 
// compiler knows exactly what methods are safe to call."""

// . The Real-World AnalogyUse an analogy to prove you understand the high-level concept
//  before diving into code:The Analogy: Imagine receiving a package marked "Fragile Content."
//  You cannot open it blindly with a hammer. You must first check a label on the box. If 
// the label says "Glassware," you unpack it with care. If it says "Books," you can handle
//  it more casually.The Connection: The "label check" is your type guard. Type narrowing 
// is the safe unpacking process based on that check.

// 3. Sketch a Clear, Live ExampleDo not write a generic string | number example. Interviewers
//  see that constantly. Instead, use a Discriminated Union (the industry standard for clean 
// architecture).

// 1. Define the union types with a common literal property
interface SuccessResponse { type: "success"; data: string }
interface ErrorResponse { type: "error"; message: string }

type ApiResponse = SuccessResponse | ErrorResponse;

function handleResponse(response: ApiResponse) {
  // 2. Use the 'type' literal property as a type guard
  if (response.type === "success") {
    // The compiler automatically narrows 'response' to SuccessResponse here
    return response.data.toUpperCase(); 
  }
  
  // The compiler is smart enough to know it must be ErrorResponse here
  logError(response.message);
}

// 4.Highlight the Advanced "Bonus" PointsTo truly stand out and show senior-level knowledge,
//mention these three concepts:Control Flow Analysis: Mention that modern compilers track 
//your if, else, return, and switch statements to automatically narrow down types without 
//extra code.Exhaustiveness Checking: Explain that you can use a never type in a default 
//switch block to ensure that if a teammate adds a new type to the union later, the compiler
// will break and force them to handle it.Custom Type Guards: Mention using the is keyword
//(e.g., value is User) to write reusable validation functions for highly complex object
// shapes.