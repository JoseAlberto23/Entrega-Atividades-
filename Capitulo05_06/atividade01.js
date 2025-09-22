
var x = 10;

function f() {
    console.log("Dentro de f(): x =", x);
}

function g() {
    var x = 20; 
    f();        
}

g();
