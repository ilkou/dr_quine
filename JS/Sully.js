const fs = require('fs');
const { exec } = require('child_process');

let i = 5;

i = fs.existsSync('./Sully_5.js') ? i : 6;

(function Sully() {
	if (i > 0) {
		let data = "const fs = require('fs');\nconst { exec } = require('child_process');\n\nlet i = " + (i - 1).toString() + ";\n\ni = fs.existsSync('./Sully_5.js') ? i : 6;\n\n(" + Sully.toString() + ")()\n";
		fs.writeFile("Sully_" + (i - 1).toString() + ".js", data, (err) => {});
		fs.writeFile("Sully_" + (i - 1).toString(), "#!/usr/bin/env node\n" + data, (err) => {});
		exec("chmod +x Sully_" + (i - 1).toString(), (err, stdout, stderr) => {});
		exec("./Sully_" + (i - 1).toString(), (err, stdout, stderr) => {});
	}
})()
