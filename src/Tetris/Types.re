type cell =
  | O
  | X;

type row = array(cell);

type grid = array(row);

type block = array(row);

type blockPosition = {
  x: int,
  y: int,
};



type blockSize = {
  width: int,
  height: int,
};

type nextBlock = block;

type gameOver = bool;

type intervalId = option(Js.Global.intervalId);

type countdownId = ref(option(Js.Global.intervalId));

type countdownCounter = int;

type gridState = {
  block : block,
  blockPosition: blockPosition,
  grid: grid,
};

type stats = {
  score: int,
  lines: int,
  level: int
}

type gameState = {
  gridState,
  stats,
  gameOver
};

type globalState = {
  gridState,
  nextBlock,
  intervalId,
  countdownCounter,
  countdownId,
  stats
};



type direction = Left | Up | Right | Down | Unknown;
