const fs = require('fs'); 
var input = fs.readFileSync('BuscaNaInternet2413.txt', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift(),10);
 console.log(n*4);  