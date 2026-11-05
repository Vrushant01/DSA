/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe : (secondValue) => {
            if(val === secondValue) return true;
            throw new Error("Not Equal");
        },
        notToBe : (secondValue) => {
            if(val !== secondValue) return true;
            throw new Error("Equal")
        }
    };
};


//  expect(5).toBe(5); // true
//  expect(5).notToBe(5); // throws "Equal"
 