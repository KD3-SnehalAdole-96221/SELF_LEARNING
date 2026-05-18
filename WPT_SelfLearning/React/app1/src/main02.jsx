import {createRoot} from "react-dom/client";

const person={
     name:"mukesh",
     age:"40",
     city:"mumbai"

}

const product={
    name:"pen",
    price:"10",
    category:"stationary"

}

const div=<div>
    <div>
        <h1>person details</h1>
        <p>name={person.name}</p>
        <p>age={person.age}</p>
        <p>city={person.city}</p>
    </div>
    <hr></hr>
    <div>
        <h1>Product Details</h1>
         <p>name={product.name}</p>
        <p>price={product.price}</p>
        <p>category={product.category}</p>
    </div>

</div>


createRoot(document.getElementById('root')).render(div)