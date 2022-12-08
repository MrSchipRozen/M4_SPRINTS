const express = require('express');
const app = express();
const path = require('path');
let buzzer = 0;
//Ports
const PORT = 5500;
const url = '127.0.0.1:';

app.use(
    express.urlencoded({
        extended: true,
    }),
)
app.use(express.json())

const cors = require("cors");
app.use(
	cors({
		// accept vercel
		// origin: "https://projeto3-client.vercel.app/",

		// accept any request from any origin
		origin: "*",
	})
);
app.use(express.static("./front"));

app.get("/", (req, res) => {
    res.sendFile(path.join(__dirname, "./front/index.html"));
  });

app.get('/buzer', (req, res) => {
    res.send({buzzer});
})
app.post('/buzer',(req,res) => {
    const { upbuzz } = req.body;
    buzzer = upbuzz;
    res.status(200).json({msg:"Ok"});

})

app.listen(PORT,() => {
    console.log(`Page server running at http://${url}${PORT}/`);
  });
