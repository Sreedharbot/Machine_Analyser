
const express = require('express');
const datastore = require('nedb');
const app = express();

port = 3000;


app.listen(port, ()=>console.log(`Listening to Port - ${port}`));
app.use(express.static('public2'));
app.use(express.json({limit:'2mb'}));




const database = new datastore('website.db');
database.loadDatabase();

app.get('/data',(request,response)=>{
    database.find({},(err,data)=>{
        if(err){
            console.end();
            return;
        }
        response.json(data);
    });
});

app.post('/api',(request,response)=>{
    //console.log(request.body);
    const data = request.body;
    const timestamp = Date.now();
    data.timestamp = timestamp;
    database.insert(data);
    console.log(database)
    response.json({
        timestamp2: timestamp,     
    });
});
