const fs = require('fs'); 
var input = fs.readFileSync('pnue2373.txt', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift(),10);
var m = parseInt(lines.shift(),10);

 console.log(n-m);  