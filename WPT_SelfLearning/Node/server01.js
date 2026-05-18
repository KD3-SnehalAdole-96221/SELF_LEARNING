const http=require('http');

const server=http.createServer((req,res)=>
{
    console.log('inside server handling request')
    // res.setHeader('content-type','text/html')
    // res.end('<h1>checking in html</h1>')
    res.setHeader('content-type','application/json')
    res.end('{name:"snehal",age:22,subject:"wpt}')
   
    
})

server.listen(4000,'localhost',()=>
{
    console.log('server start')
})