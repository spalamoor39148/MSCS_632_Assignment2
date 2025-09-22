// js_closure.js
function makeAdder(a) {
    return function(b) {
        return a + b; // 'a' captured lexically
    };
}

const add5 = makeAdder(5);
console.log("add5(7) =>", add5(7)); // 12

const add10 = makeAdder(10);
console.log("add10(3) =>", add10(3)); // 13
