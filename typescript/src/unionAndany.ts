let subs: number | string = '1M';

let  apiRequestStatus: 'pending' | 'success' | 'error' = 'pending';

// apiRequestStatus = 'done'; // error because 'done' is not assignable to type 'pending' | 'success' | 'error';
// apiRequestStatus = 'success'; // valid because 'success' is assignable to type 'pending' | 'success' | 'error';


const orders = ['12', '20','30'] 
let currentOrder : string | undefined;

for (let order of orders){
    if (order === "20"){
        currentOrder = order;
    }
}

console.log(currentOrder); 