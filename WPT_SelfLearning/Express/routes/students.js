const express=require('express')
const data=require('../data')
const {createResult}=require('../util/result')
const router=express.Router()

router.get('/student',(req,res)=>
{
    // const body={
    //     status: "success",
    //     data: data.student
    // }
    // res.send(body)
    res.send.createResult(data.student)
})
app.get('/user',(req,res)=>
{
    const sql=`select * from users `
    Pool.query(sql)
    .then(data=>res.)
})

module.exports=router