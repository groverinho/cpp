const fs = require('fs'); 
var input = fs.readFileSync('CompleteSentence1551.txt', 'utf8');
var lines = input.split('\n');


function evaluate(sentence){
	const mySet = new Set();
	for (var i = 0; i < sentence.length; i++) {
		if(sentence[i].match(/[a-z]/i)){
		mySet.add(sentence[i]);
		}
	}
	if(mySet.size === 26){
		return "frase completa";
	} else  if(mySet.size*2 >= 26) {
		return "frase quase completa";
	} else {
		return "frase mal elaborada";
	}
	
}

var n = lines.shift();
for (var i = 0; i < parseInt(n,10); i++) {
	var sentence = lines.shift();
	console.log(evaluate(sentence));
}