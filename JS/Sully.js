const fs = require('fs');
const { exec } = require('child_process');

let i = 5;

i = fs.existsSync('./Sully_5.js') ? i : 6;

(function Sully() {
	if (i > 0) {
		fs.writeFile("Sully_" + (i - 1).toString() + ".js", "const fs = require('fs');\nconst { exec } = require('child_process');\n\nlet i = " + (i - 1).toString() + ";\n\ni = fs.existsSync('./Sully_5.js') ? i : 6;\n\n(" + Sully.toString() + ")()\n", (err) => {});
		exec("node Sully_" + (i - 1).toString() + ".js", (err, stdout, stderr) => {});
	}
})()
