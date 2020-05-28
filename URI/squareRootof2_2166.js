const fs = require('fs'); 
var input = fs.readFileSync('squareRootof2_2166.txt', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift(),10);
var r =0.0;
for(var i = 0; i<n;i++) {
	r=r+2.0;
	r=(1.0/r);
}
r+=1;
console.log(r.toFixed(10));