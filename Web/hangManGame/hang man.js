let blanks = document.querySelector(".blanks");
let keys = document.querySelector(".keys");
let hang_man = document.querySelector(".hang_man")
let newgame = document.querySelector(".newgame")
let h1_tag = document.querySelector(".h1_tag");

let word_collection = ["happy", "hint", "database", "mushroom"];


let hints_collection = ["opposite of sad",
    "suggestion for question", "place where data is stored", "room which you can't enter"
]

let random_word = Math.floor(Math.random() * word_collection.length);


// runs on body load
function runs_onload() {
    make_space_of_len_of_game_word();
    value_update();
    keyboard();
    h1_tag.innerHTML = "Hang Man Game";
}

//read name of this function
let game_word = word_collection[random_word].toUpperCase();

function make_space_of_len_of_game_word() {
    for (let i = 0; i < game_word.length; i++) {
        blanks.innerHTML += `<input type="text" maxlength='0' id="space${i}"> <br>`;
    }
}

//To give hint
let game_hint = hints_collection[random_word]
let help = document.querySelector(".hint_for_this_game")
help.innerHTML = `Hint:-&nbsp &nbsp ${game_hint}`

// make keyboard
function keyboard() { 
let str = `ABCDEFGHIJKLMNOPQRSTUVWXYZ_ -'`;
    for (let i = 0; i < 30; i++) {
        keys.innerHTML += `<input type='button' value="${str[i]}" onclick="keypressed(this, value)">`;
    }
}

// sets value like life, remaining, attempt etc
let value = [10, 0, 0, 0, game_word.length];

function value_update() {
    for (let i = 0; i < 5; i++) {
        document.querySelector(`#n${i + 1}`).innerHTML = value[i];
    }
}

// function that runs on clicking key on keyboard
function keypressed(clicked, ch) {
    //to hide clicked alphabet
    clicked.style.visibility = "hidden";
    let correct = false;
    correct_not(ch, correct);

    //to end the game after life ==0 || completely filled
    if (value[0] == 0 || value[4] == 0) {
        winloss(value[0], value[4])
    }
}

// check weather clicked alphabet is correct or not
function correct_not(ch, correct) {
    for (i = 0; i < game_word.length; i++) {
        if (ch == game_word[i]) {
            correct = true;
            document.querySelector(`#space${i}`).value = ch;
            value[4] -= 1; // remaining
        }
    }
    check(correct);
    value[1] += 1; // attempt
    value_update(); // update value on every keypress
}

//change value of life, attempt... on keypress
function check(correct) {
    if (correct) {
        value[2] += 1; //correct
    } else {
        correct = false;
        value[0] -= 1; // life
        value[3] += 1; // wrong
        push_img();
    }
}

// function that loads image on wrong input
let img_value = [];
let img_name = 0;

function push_img() {
    img_value.push(img_name);
    img_name++;

    for (let i = 0; i < img_value.length; i++) {
        hang_man.innerHTML += `<img src="images/man/${img_value[i]}.png" class="man" id ="img_no${i}">`
    }
}

//function to check win or loss
function winloss(life, remaining) {
    // loss the game
    if (life == 0) {
        h1_tag.innerHTML = 'You Have Been Hanged To Death'
        newgame.style.display = "block"

        //to print correct answer after losing
        for (let i = 0; i < game_word.length; i++) {
            document.querySelector(`#space${i}`).value = game_word[i]
        }
    }

    // won the game
    else {
        hang_man.innerHTML += `<img src="images/man/10.png" class="man">`;
        newgame.style.display = "block";
        h1_tag.innerHTML = 'Congratulation You Won The Game';
    }
}

//function for play again button
function reload() {
    location.reload()
}