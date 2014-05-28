document.querySelector('#entrada').onkeyup = function() {        
    document.querySelector('#cont').innerHTML = document.querySelector('#entrada').value.length;
    document.querySelector('#palavras').innerHTML = document.querySelector('#entrada').value.split(' ').length;
    var teste  = document.querySelector('#entrada').value;
    
};

document.querySelector('#inverso').onclick = function() {
    var entrada = document.querySelector('#entrada').value.split('').reverse();
    document.querySelector('#saida').value = entrada.join('');
};

document.querySelector('#invertido').onclick = function() {
    var entrada = document.querySelector('#entrada').value.split(' ').reverse();
    document.querySelector('#saida').value = entrada.join(' ');
};

document.querySelector('#maiusculo').onclick = function() {
    var entrada = document.querySelector('#entrada').value.toUpperCase();
    document.querySelector('#saida').value = entrada;
};

document.querySelector('#minusculo').onclick = function() {
    var entrada = document.querySelector('#entrada').value.toLowerCase();
    document.querySelector('#saida').value = entrada;
};

document.querySelector('#Imaiusculo').onclick = function() {
    var entrada = document.querySelector('#entrada').value.split(' ');
    var saida2 = "";
    for (j = 0; j < entrada.length; j++) {

        for (i = 0; i < entrada[j].length; i++) {
            if (i === 0) {
                var saida = entrada[j].charAt(0).toUpperCase();
                i++;
            }
            var saida = saida + entrada[j].charAt(i);
        }
        var saida2 = saida2 + saida + " ";
    }
    document.querySelector('#saida').value = saida2;
};