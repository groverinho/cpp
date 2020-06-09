const fs = require('fs'); 
var input = fs.readFileSync('evenSuccessor2679.txt', 'utf8');
var lines = input.split('\n');
var x = parseInt(lines.shift(),10);
console.log(x%2===0?(x+2):(x+1));