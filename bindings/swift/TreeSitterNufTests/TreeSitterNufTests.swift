import XCTest
import SwiftTreeSitter
import TreeSitterNuf

final class TreeSitterNufTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_nuf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Nuf grammar")
    }
}
