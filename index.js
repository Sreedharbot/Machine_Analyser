const express = require('express');
const server = express();

port = 3000;

server.listen(port,()=>console.log(`Server listening to - ${port}`));
server.use(express.static('public'));
