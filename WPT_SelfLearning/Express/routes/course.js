
const express=require('express')
const data=require('../data')
const { createResult } = require('../util/result')
const router=express.Router()




router.get('/',(req,res)=>
{    //console.log(data.Course)
    // const body={
    //     status:'success',
    //     data: data.Course
    // }
    // res.send(body)
    res.send.createResult(data.Course)
})

module.exports=router

