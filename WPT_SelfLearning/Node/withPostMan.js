const http=require('http')
const server=http.createServer((request,response)=>
{
    const method=request.method
    const path=request.url
    console.log(`method-${method}, path-${path}`);


  const student=  [
  {
    "roll": 101,
    "name": "Rahul Sharma",
    "class": "TY-BCA",
    "email": "rahul@email.com",
    "gpa": 8.5,
    "enrolled": [501, 502]
  },
  {
    "roll": 102,
    "name": "Priya Patil",
    "class": "SY-BCA",
    "email": "priya@email.com",
    "gpa": 9.1,
    "enrolled": [501, 503]
  },
  {
    "roll": 103,
    "name": "Amit Verma",
    "class": "TY-BCA",
    "email": "amit@email.com",
    "gpa": 7.8,
    "enrolled": [502]
  }
]



const Course=
[
  {
    "courseId": 501,
    "title": "Web Programming Technologies",
    "credits": 4,
    "techStack": ["HTML", "CSS", "JS", "Node.js"],
    "instructor": "Dr. Smith"
  },
  {
    "courseId": 502,
    "title": "Database Technologies",
    "credits": 3,
    "techStack": ["MySQL", "MongoDB"],
    "instructor": "Prof. Rao"
  },
  {
    "courseId": 503,
    "title": "Cloud Computing",
    "credits": 3,
    "techStack": ["AWS", "Docker"],
    "instructor": "Mrs. Kapoor"
  }
]




    
    if(method=="GET" && path=='/Course')
    {
        // response.end("get by default")
        response.setHeader('content-type','application/json')
        response.end(JSON.stringify(Course))
        
    }
    else if(method=="POST" && path=='/Course')
    {
        response.end("post Course");
       
    }
    else if(method=="PUT" && path=='/Course')
    {
        response.end("post Course");
       
    }
    else if(method=="DELETE" && path=='/Course')
    {
        response.end("DELETE Course");
       
    }
     else if(method=="GET" && path=='/student')
    {
        // response.end("get by default student")
         response.setHeader('content-type','application/json')
         response.end(JSON.stringify(student))
    }
    else if(method=="POST" && path=='/student')
    {
        response.end("post student");
    }
    else if(method=="PUT" && path=='/student')
    {
        response.end("post student");
    }
    else if(method=="DELETE" && path=='/student')
    {
        response.end("DELETE student");
    }

})

server.listen(4000,'localhost',()=>
{
    console.log("server sstarted");
})