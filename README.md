![DigisparkRubberDuckyExecuteCommand Logo](https://mauricelambert.github.io/info/python/security/DigisparkRubberDuckyExecuteCommand_small.png "DigisparkRubberDuckyExecuteCommand logo")

# DigisparkRubberDuckyExecuteCommand

## Description

This python script generates the INO code to make your own Rubber Ducky with a Digispark without any requirements.

> This script is written to execute a command with from a Digispark, so it generate the *Windows+R* keyboard shortcut at the start and the *Return* (or *enter*) key press at the end.
>> A had a little feature to know when your code is written, when Digispark firmware will write characters, the red LED is HIGH (turned on), at the payload end the LED is LOW (turned off).

## Requirements

This script require:
 - python3
 - python3 Standard Library

## Installation

### Git

```bash
git clone "https://github.com/mauricelambert/DigisparkRubberDuckyExecuteCommand.git"
cd "DigisparkRubberDuckyExecuteCommand"
```

### Wget

```bash
wget https://github.com/mauricelambert/DigisparkRubberDuckyExecuteCommand/archive/refs/heads/main.zip
unzip main.zip
cd DigisparkRubberDuckyExecuteCommand-main
```

## Usages

### Command line

```bash
python3 DigisparkRubberDuckyExecuteCommand.py <lang: fr|us> <command>
```

## Links

 - [Github](https://github.com/mauricelambert/DigisparkRubberDuckyExecuteCommand)

## License

Licensed under the [GPL, version 3](https://www.gnu.org/licenses/).
