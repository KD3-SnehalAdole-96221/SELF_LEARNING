import{ createRoot } from "react-dom/client"

// const div=
// <div>
//     <h1>My details</h1>
//     <p>name:snehal</p>
//     <p>age:22</p>
//     <p>address:Amravati</p>
// </div>
const p={
    name:'snehal',
    age:22,
    address:'Amravati'
}
const name='snehal'
const age=22
const address='Amravati'

const div=
<div>
    <h1>My details</h1>
    <p>name:{name}</p>
    <p>age:{age}</p>
    <p>address:{address}</p>
    <hr></hr>

    <h1>My details</h1>
    <p>name:{p.name}</p>
    <p>age:{p.age}</p>
    <p>address:{p.address}</p>

</div>
    


createRoot(document.getElementById('root')).render(div)