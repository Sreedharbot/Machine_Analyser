# Machine_Analyser
Documentation of Personal Projects

It is IOT based project. **Boardcasting data from MCU(Microcontroller to Websites)**.

Things learned while covering making these are:
* Using of  ChatGPT.(Making the coding easy and test your solution faster).
* Learned HTTP (POST, GET Protocols) for easy Pushing of data to your website.
* Learned, How to build your own server from scratch using "node.js and also in python*".

I basically, Started my learning in understanding **"Web API"** because, it was very new to me and for this project it was the only necessary part which was mostly needed.

I learned and got my understand, by taking this tutorial from youtube [coding train](https://thecodingtrain.com/) "Beautiful content for learning JavaScripts (beginner)"

## Creating Local Server from **"Node.js" using npm**.

The necessary for creating a local server is to push data from MCU (Microcontrol) to local server in order to save in local serve without any 3rd party accessing data. Moreover, It is done locally, so the data will be within the network region. (For pushing to open networks, Still searching for ideas and better implentation).

Steps for setting Local Server:
* Install **Nodejs (LTs - Long Term Support)** (It comes with "npm").

After Installing, run this code (windows support)

```
mkdir node 
cd node
npm init -y
npm install express -save
````
to know more about npm and nodejs, watch this [video](https://youtu.be/P3aKRdUyr0s).

Then execute this code,
```
node index.js
````

This code will run local serve, from "http://localhost:3000". Open this URL in your browser to verify the local host is working.\
Basically, It is hosting the static webpage, which is in "\Public\index.html". **Don't change the index.html to other name**

Once Web-Server is Created. An Embedded device like (ESP8266 / ESP32) is used to send data to local server. The Local server save the data in jason, as a database and push to a webpage.





