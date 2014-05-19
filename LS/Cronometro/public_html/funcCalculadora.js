document.querySelector('#iniciar').onclick = function() {
    var seg = 1;
    var min = 0;
    var hora = 0;
    setInterval(function() {
        
        if (seg == 60) {
            document.querySelector('#min').value = min;
            min++;
            seg = 0;
        }
        
        if (min == 60) {
            document.querySelector('#hora').value = hora;
            hora++;
            min = 0;
        }
        
        document.querySelector('#seg').value = seg;
        document.querySelector('#min').value = min;
        document.querySelector('#hora').value = hora;
        seg++;
    }, 1000);
};
