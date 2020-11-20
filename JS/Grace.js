const fs = require('fs')

/*
   There's no Macros in JS, but well
*/

const REQUIRE = "const fs = require('fs')"
const FILE = "Grace_kid.js"
const FT = (x) => { fs.writeFile(x, REQUIRE + "\n\n/*\n   There's no Macros in JS, but well\n*/\n\nconst REQUIRE = \"" + REQUIRE + "\"\nconst FILE = \"" + FILE + "\"\nconst FT = " + FT + "\n\nFT(FILE)\n", (err) => {if (err);}); }

FT(FILE)
