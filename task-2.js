function solve(vectorA, vectorB) {

    let result = [];
    let additionalParameter = 0;

    if (vectorA.length === vectorB.length) {
        for (let i = vectorA.length-1; i >= 0; i--) {
                
                let sumOfCurrnetDigits = vectorA[i] + vectorB[i] + additionalParameter;
        
                if (sumOfCurrnetDigits > 9) {        
                    let currentSum = sumOfCurrnetDigits % 10;
                    result.unshift(currentSum);
        
                    additionalParameter = 1;
                }else {
                    result.unshift(sumOfCurrnetDigits);
        
                    additionalParameter = 0;
                } 
        }
       
    }else {      
        if (vectorA.length > vectorB.length) {
            let newVectorA = vectorA.splice(-vectorB.length);

            
            for (let i = newVectorA.length-1; i >= 0; i--) {
                
                let sumOfCurrnetDigits = newVectorA[i] + vectorB[i] + additionalParameter;
        
                if (sumOfCurrnetDigits > 9) {        
                    let currentSum = sumOfCurrnetDigits % 10;
                    result.unshift(currentSum);
        
                    additionalParameter = 1;
                }else {
                    result.unshift(sumOfCurrnetDigits);
        
                    additionalParameter = 0;
                } 

            }   
            for (let i = vectorA.length-1; i >= 0; i--) {
                result.unshift(vectorA[i]);                    
            }
        }else {
            let newVectorB = vectorB.splice(-vectorA.length);

            for (let i = newVectorB.length-1; i >= 0; i--) {
                
                let sumOfCurrnetDigits = vectorA[i] + newVectorB[i] + additionalParameter;
        
                if (sumOfCurrnetDigits > 9) {        
                    let currentSum = sumOfCurrnetDigits % 10;
                    result.unshift(currentSum);
        
                    additionalParameter = 1;
                }else {
                    result.unshift(sumOfCurrnetDigits);
        
                    additionalParameter = 0;
                } 

            }   
            for (let i = vectorB.length-1; i >= 0; i--) {
                result.unshift(vectorB[i]);                    
            }
        }
    }       

    console.log(result);
}

solve([ 5, 6, 7, 8, 9, 0], [1, 2, 3, 4]);
