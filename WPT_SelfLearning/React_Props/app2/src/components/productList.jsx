import React from "react"
import Product from "./product"
function ProductList() {
    // const p = { pid: 1, name: "Pen", price: 20 }
    const arr = [
        { pid: 1, name: 'Pen', price: 20 },
        { pid: 2, name: 'Pencil', price: 10 },
        { pid: 3, name: 'Book', price: 50 },
        { pid: 4, name: 'Crayons', price: 30 },
    ]

    return (
        <div>
            <h1>Product List</h1>
            {arr.map(p=> <Product pid={p.pid} name={p.name} price={p.price}></Product>)}
        </div>
    )

}

export default ProductList

