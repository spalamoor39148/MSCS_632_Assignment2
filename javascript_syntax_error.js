// javascript_syntax_error.js
// Intentional errors: 'o' undefined and malformed function call token

function calculateSum(arr) {
    let total = o; // ReferenceError when executed: o is not defined
    for (let num of arr) {
        total += num;
    }
    return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = calculate Sum (numbers); // SyntaxError: Unexpected identifier (parse-time)
console.log("Sum in JavaScript:", result);
