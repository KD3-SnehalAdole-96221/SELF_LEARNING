function EmployeeList()
{
    const arr=[
        {empid: 1, name: 'snehal', salary: 400000},
        {empid: 2, name: 'purva', salary: 400000},
        {empid: 3, name: 'prerana', salary: 400000}
    ]

    return(
        <>
            <h1>Employee List</h1>
            
            {/* <ul>
                <li>empid: { arr[0].empid}, name:{arr[0].name }</li>
                <li>{arr[1].empid | arr[1].name | arr[1].salary}</li>
            </ul> */}
            
            {
            arr.map((emp)=>{
                return  <div>

                    <p>empid: {emp.empid}</p>
                    <p>name: {emp.name}</p>
                    <p>salary: {emp.salary}</p>
                    
                    </div>
              
                
            })
            }


{/* 
           { arr.map(emp => {
                    return <div>
                        <p>Empid : {emp.empid}</p>
                        <p>Name : {emp.name}</p>
                        <p>Salary : {emp.salary}</p>
                        <hr />
                    </div>
                })
                
                
            } */}


        </>
    )
}


export default EmployeeList