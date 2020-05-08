const fs = require('fs'); 
var input = fs.readFileSync('chess.txt', 'utf8');
var lines = input.split('\n');
var l = lines.shift();
var c = lines.shift();
console.log(((l%2!==0)&&(c%2!==0))||((l%2===0)&&(c%2===0))?1:0);