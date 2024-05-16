/**
 * @jest-environment jsdom
 */
import { render, screen } from "@testing-library/react";
import Page from "./page";

it("App Router: Works with Server Components", () => {
  render(<Page />);
  expect(screen.getByRole("heading", {level:1})).toHaveTextContent("Super App Router");
 
  expect(screen.getByTestId("counter")).toHaveTextContent("1");
});
