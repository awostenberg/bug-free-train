"use client";

import { useState } from "react";

export default function Counter() {
  const [count, setCount] = useState(1);
  return (
    <>
      <h2 data-testid="counter">{count}</h2>
      <button type="button" onClick={() => setCount(count + 1)}>
        +
      </button>
    </>
  );
}
