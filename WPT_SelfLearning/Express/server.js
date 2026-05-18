


// const express=require('express')
// const app=express()
// const courseRouter=require('./routes/course')
// const studentRouter=require('./routes/students')


// app.use((req,res,next)=>
// {
//     console.log("middleware")
//     next()
// })


// app.use('/course',courseRouter)

// app.use('/student',studentRouter)

// app.listen(4000,'localhost',()=>
// {

//     console.log("Server Started with Modular programming")

// })


const express=require('express')
const app=express()
const sql=require('mysql2')
const pool=sql.createPool(
    {
        host:'localhost',
        user:'root',
        password:'root',
        database:'students'
    }
)

