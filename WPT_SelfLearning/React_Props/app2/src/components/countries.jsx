
function Countries()
{
    const arr=['India','Australia','japan']

    return<>
        {/* <h1>List Of Countries</h1>
        <ul>
        <li>{arr[0]}</li>
        <li>{arr[1]}</li>
        <li>{arr[2]}</li>
        </ul> */}

        <ul>{arr.map(c => <li>{c}</li>)}</ul>
    </>
}

export default Countries