function reverse(str){
    let strarr = str.split('');
    console.log(strarr)
    let res =[];
    for(let i=strarr.length-1;i>=0;i--){
         res.push(strarr[i]);
    }

    return res.join("");
}

console.log(reverse("guardanthealth"))