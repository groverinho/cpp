const fs = require('fs'); 
var input = fs.readFileSync('Twitting.txt', 'utf8');
var lines = input.split('\n');

console.log(lines.shift().length>140 ?"MUTE":"TWEET");