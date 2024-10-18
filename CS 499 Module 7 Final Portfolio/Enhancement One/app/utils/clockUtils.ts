/* Clock Utils takes care of the logic for the (static) clock. For example, to change the hour, to change the minute, and the second, for both the 12 hour and the 24 hour clock. */

/* Function to change the hour */

export const changeHour = (
    increment: boolean,
    hour12: number,
    setHour12: React.Dispatch<React.SetStateAction<number>>
  ) => {
    if (increment) {
      setHour12((prev) => (prev === 12 ? 1 : prev + 1));
    } else {
      setHour12((prev) => (prev === 1 ? 12 : prev - 1));
    }
  };
  
  /* Function to make the minute change */
  export const changeMinute = (
    increment: boolean,
    minute: number,
    setMinute: React.Dispatch<React.SetStateAction<number>>,
    setHour12: React.Dispatch<React.SetStateAction<number>>
  ) => {
    if (increment) {
      if (minute === 59) {
        changeHour(true, 12, setHour12); /* Call the changeHour function to change the hour. (add) */
        setMinute(0);
      } else {
        setMinute((prev) => prev + 1);
      }
    } else {
      if (minute === 0) {
        changeHour(false, 12, setHour12); /* Remove one hour by calling the changeHour function. */
        setMinute(59);
      } else {
        setMinute((prev) => prev - 1);
      }
    }
  };
  
  /* Function to change the seconds. */
  export const changeSecond = (
    increment: boolean,
    second: number,
    setSecond: React.Dispatch<React.SetStateAction<number>>,
    setMinute: React.Dispatch<React.SetStateAction<number>>,
    setHour12: React.Dispatch<React.SetStateAction<number>>
  ) => {
    if (increment) {
      if (second === 59) {
        changeMinute(true, 0, setMinute, setHour12); // Call the changeMinute function to add a minute.
        setSecond(0);
      } else {
        setSecond((prev) => prev + 1);
      }
    } else {
      if (second === 0) {
        changeMinute(false, 0, setMinute, setHour12); // Call the changeMinute function to remove a minute
        setSecond(59);
      } else {
        setSecond((prev) => prev - 1);
      }
    }
  };
  
  // Function to toggle AM/PM
  export const toggleAMPM = (setIsAM: React.Dispatch<React.SetStateAction<boolean>>) => {
    setIsAM((prev) => !prev);
  };
  
  // Convert 12-hour format to 24-hour format
  export const convertTo24HourFormat = (hour12: number, isAM: boolean): number => {
    return isAM ? (hour12 === 12 ? 0 : hour12) : hour12 === 12 ? 12 : hour12 + 12;
  };
  