const {log}=require('console');
const http=require('http');

const server = http.createServer((request,response)=>
{
    const method=response.method
    
    
    if(method=="GET" )
    {
        response.end(" go to the hell");
    }
    else if(method=="POST")
    {
        response.end(" Inside Post")
    }
    else if(method=="PUT")
    {
        response.end("updated by put")
    }
    else if(method=="DELETE")
    {
        response.end(" data deleted ")
    }
    else
    {
        respond.end("Invalid method");
    }
    
})

server.listen(4000,'localhost',()=>
{
    log('server started');
})