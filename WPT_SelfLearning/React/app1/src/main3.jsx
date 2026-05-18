import {createRoot} from "react-dom/client";

 function Person()
 {
    const p={
        name: 'hey! this is snehal',
        greetings:'how are you'
    }
    return <div>
        <h1>{p.name}</h1>
        <p>{p.greetings}</p>
        
    </div>
 }

 function Course()
 {
    const c={
        course:"PGCP-AC",
        institute:"Sunbeam karad"
    }
    return <div>
        <h1>course={c.course}</h1>
        <h1>Institute={c.institute}</h1>
        {Person()}
    </div>
 }

const div=
<div>

    {/* <Person/> */}
    {/* {Person()} */}
    <hr></hr>
    <Course/>

</div>

createRoot(document.getElementById('root')).render(div)